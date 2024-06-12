# Discord Webhook Sender

This is a simple C++ program that sends a message to a Discord channel via a webhook.

## Dependencies

This program uses the following libraries:
- `cpr` for making HTTP requests.
- `nlohmann/json` for creating JSON objects.

You can install these libraries using a package manager like vcpkg or directly from their GitHub repositories.

## Usage

Replace `"Your Username"`, `"Your Avatar URL"`, `"Your Message"`, `"Your Embed Title"`, `"Your Embed Description"`, and `"Your Webhook URL"` in the `main.cpp` file with your actual values.

Then, compile and run the program. If the webhook is sent successfully, it will print "Webhook sent successfully." If it fails, it will print "Failed to send webhook. HTTP status: " followed by the HTTP status code.

## Rate Limiting

Please be aware that Discord may rate limit your requests if you send too many in a short period of time. Always ensure you're following Discord's rate limit guidelines when using their API.

## License

This project is licensed under the MIT License - see the LICENSE.md file for details
