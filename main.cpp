
/*
* Server that listens on port 12345 and logs the data received from the client to a file and console
*/


#include <boost/asio.hpp>
#include <iostream>
#include <thread>

#include"logger.hpp"

using boost::asio::ip::tcp;


void handle_client(tcp::socket socket);

Logger logger;


int main() {
	

    try {
        boost::asio::io_context io_context;

        tcp::acceptor acceptor(io_context, tcp::endpoint(tcp::v4(), 12345));
        std::cout << "Server is running on port 12345..." << std::endl;

        for (;;) {
            tcp::socket socket(io_context);
            acceptor.accept(socket);

            std::thread(handle_client, std::move(socket)).detach();
        }
    }
    catch (std::exception& e) {
        std::cerr << "Server error: " << e.what() << std::endl;
    }

    return 0;
}

void handle_client(tcp::socket socket) {
    try {
        std::cout << "Client connected!" << std::endl;

        for (;;) {
            char data[1024];
            std::size_t length = socket.read_some(boost::asio::buffer(data));

			logger.log_to_file(std::string(data, length));
			logger.log_to_console(data[0]);
           
        }
    }
    catch (std::exception& e) {
        std::cerr << "Client error: " << e.what() << std::endl;
    }
}