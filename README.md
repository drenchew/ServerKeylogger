
# ServerKeylogger

ServerKeylogger is a C++ application designed to log keystrokes on a client machine and integrate server-side functionality for processing the logs. The project includes basic logging mechanisms and server-related components.

## Features

- Logs keystrokes on a client machine.
- Provides a server interface for processing and managing logs.
- Written in C++ with modular code structure.

## Prerequisites

- C++ compiler (e.g., Visual Studio or GCC).
- Boost C++ Libraries (if required by dependencies).

## Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/drenchew/ServerKeylogger.git
   ```

2. Install Boost (if needed):
   - On Linux:
     ```bash
     sudo apt-get install libboost-all-dev
     ```
   - On Windows:
     Download Boost from [Boost Downloads](https://www.boost.org/users/download/) and follow [Windows build instructions](https://www.boost.org/doc/libs/release/more/getting_started/windows.html).

3. Open `logger.sln` in Visual Studio or use GCC:
   ```bash
   g++ -o ServerKeylogger main.cpp -lboost_system -lboost_filesystem -pthread
   ```

## Usage

1. Build the project using your preferred IDE or terminal.
2. Execute the compiled binary.
3. Logs will be managed through the server-side interface.

## Disclaimer

This project is intended for educational purposes only. Using keylogging software without explicit permission is illegal.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgements

- Boost C++ Libraries.
- Keylogging and server integration concepts.
