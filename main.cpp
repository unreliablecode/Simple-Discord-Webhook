#include <cpr/cpr.h>
#include <nlohmann/json.hpp>

int main() {
    nlohmann::json data;
    data["username"] = "Your Username";
    data["avatar_url"] = "Your Avatar URL";
    data["content"] = "Your Message";

    nlohmann::json embed;
    embed["title"] = "Your Embed Title";
    embed["description"] = "Your Embed Description";
    embed["color"] = 16711680; // Color in decimal format

    data["embeds"] = nlohmann::json::array({ embed });

    cpr::Response r = cpr::Post(cpr::Url{"Your Webhook URL"},
                                 cpr::Header{{"Content-Type", "application/json"}},
                                 cpr::Body{data.dump()});

    if (r.status_code == 204) { // HTTP 204 No Content means success
        std::cout << "Webhook sent successfully.\n";
    } else {
        std::cout << "Failed to send webhook. HTTP status: " << r.status_code << '\n';
    }

    return 0;
}
