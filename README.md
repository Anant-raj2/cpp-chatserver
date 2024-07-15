# Chat Application README

Welcome to the Single-Threaded Chat Application! This application enables users to communicate between different terminals using a client-server architecture. This README will guide you through the setup, configuration, and usage of the chat application.

## Table of Contents

1. [Features](#features)
2. [Requirements](#requirements)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Configuration](#configuration)
6. [Troubleshooting](#troubleshooting)
7. [Contributing](#contributing)
8. [License](#license)

## Features

- **Single-threaded**: Simple architecture without the complexities of multi-threading.
- **Client-Server Architecture**: Separate client and server programs for communication.
- **Terminal-based**: Communicate through terminal windows.
- **Text Messaging**: Exchange text messages between connected clients.

## Requirements

- GCC Compiler
- Basic understanding of terminal operations
- Network access between server and clients (local or remote)

## Installation

1. **Clone the Repository**

   ```bash
   git clone https://github.com/Anant-raj2/cpp-chatserver.git
   cd cpp-chatserver
   ```

2. **Install Dependencies**

   The application does not have any external dependencies. However, ensure you have GCC installed.

3. **Directory Structure**

   ```bash
   single-threaded-chat-app/
   ├── server.cpp
   ├── client.cpp
   └── README.md
   ```

## Usage

### Starting the Server

1. Open a terminal window.
2. Navigate to the directory containing the chat application.
3. Compile scripts
4. Run the server script:

   ```bash
   ./server
   ```

   The server will start and listen for incoming connections on a specified port (default: 5555).

### Starting a Client

1. Open another terminal window.
2. Navigate to the directory containing the chat application.
3. Run the client script with the server's IP address and port:

   ```bash
   ./client
   ```

4. You can start multiple clients by opening new terminal windows and repeating the above steps.

### Communicating

- Type messages in the client terminal and press Enter to send.
- Messages from other clients will be displayed in your terminal.

## Configuration

### Server Configuration

- The server listens on a default port `5555`.

### Client Configuration

- The client connects to a specified IP address and port.
- Ensure the server's IP address and port are correctly specified when starting the client.

## Troubleshooting

- **Connection Refused**: Ensure the server is running and listening on the correct port. Check firewall settings.
- **Messages Not Received**: Verify network connectivity and ensure the server and clients are on the same network.
- **Port Already in Use**: Change the port number in `server.cpp` and `client.cpp`.

## Contributing

We welcome contributions! Follow these steps to contribute:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes.
4. Commit your changes (`git commit -m 'Add new feature'`).
5. Push to the branch (`git push origin feature-branch`).
6. Create a new Pull Request.

Happy chatting! If you have any questions or issues, please open an issue on GitHub.
---

This completes the README for the Single-Threaded Chat Application. Enjoy using the app!
