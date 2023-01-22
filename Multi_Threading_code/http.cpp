#include<bits/stdc++.h>
int main() {
    // Create a server instance
    httplib::Server server;

    // Serve a response to the "/" endpoint
    server.Get("/", [](const httplib::Request& req, httplib::Response& res) {
        res.set_content("Hello, World!", "text/plain");
    });

    // Serve a response to the "/greet" endpoint with a query parameter "name"
    server.Get("/greet", [](const httplib::Request& req, httplib::Response& res) {
        auto name = req.get_param_value("name");
        if (name) {
            res.set_content("Hello, " + *name + "!", "text/plain");
        } else {
            res.set_content("Hello, Stranger!", "text/plain");
        }
    });

    // Start the server
    server.listen("localhost", 1234);
    return 0;
}