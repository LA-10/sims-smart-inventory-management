#include <CLI11.hpp>
#include <iostream>

int main(int argc, char **argv) {
    
    CLI::App app{"AI-powered inventory management system in C++ for real-time stock tracking, sales analytics, low-stock alerts, and intelligent inventory optimization"};
    app.require_subcommand(/* min */ 0, /* max */ 1);

    argv = app.ensure_utf8(argv);

    // Define subcommands

    CLI::App* admin = app.add_subcommand("admin", "admin premission");
    CLI::App* manager = app.add_subcommand("manager", "manager premission");
    CLI::App* Employee = app.add_subcommand("employee", "employee premission");

    CLI11_PARSE(app, argc, argv);



    return 0;
}