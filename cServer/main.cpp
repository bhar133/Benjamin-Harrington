#include <iostream>
#include "server.cpp"
#include "lib/mongoose.h"
// Rest of your code ...

// Mongoose event handler function, gets called by the mg_mgr_poll()
static void fn(struct mg_connection *c, int ev, void *ev_data, void *fn_data) {
	std::cout << "Hello, World!" << std::endl;
  	//if (ev == MG_EV_HTTP_REQUEST) {
    // The MG_EV_HTTP_MSG event means HTTP request. `hm` holds parsed request,
    // see https://mongoose.ws/documentation/#struct-mg_http_message
    // struct mg_http_message *hm = (struct mg_http_message *) ev_data;

    // // If the requested URI is "/api/hi", send a simple JSON response back
    // if (mg_http_match_uri(hm, "/api/hi")) {
    //   // Use mg_http_reply() API function to generate JSON response. It adds a
    //   // Content-Length header automatically. In the response, we show
    //   // the requested URI and HTTP body:
    //   mg_http_reply(c, 200, "", "{%m:%m,%m:%m}\n",  // See mg_snprintf doc
    //                 MG_ESC("uri"), mg_print_esc, hm->uri.len, hm->uri.ptr,
    //                 MG_ESC("body"), mg_print_esc, hm->body.len, hm->body.ptr);
    // } else {
    //   // For all other URIs, serve static content from the current directory
    //   struct mg_http_serve_opts opts = {.root_dir = "."};
    //   mg_http_serve_dir(c, hm, &opts);
    // }
  //}
}

// int main() {
//   // Rest of your initialisation code ...

//   struct mg_mgr mgr;
//   mg_mgr_init(&mgr);        // Init manager
//   mg_log_set(MG_LL_DEBUG);  // Set debug log level. Default is MG_LL_INFO
//   mg_http_listen(&mgr, "http://0.0.0.0:8000", fn, NULL);  // Setup listener
//   for (;;) mg_mgr_poll(&mgr, 1000);                       // Infinite event loop

//   return 0;
// }

/**
 * main
 *
 * Initialises the server
 */
int main(void) {

	Server server;

	int port;
	std::cout << "Select server port" << std::endl;

	std::cin >> port;

	// fail case
	if (std::cin.fail())
		port = 1000;

	server.init(port);
	return 0;
}

// int main(void)
// {
// 	struct mg_mgr mgr;
// 	struct mg_connection *nc;

// 	mg_mgr_init(&mgr, NULL);
// 	nc = mg_bind(&mgr, "9000", Server::ev_handler);
// 	if (nc == NULL)
// 	{
// 		std::cerr << "Error setting up listener!" << std::endl;
// 		return 1;
// 	}
// 	mg_set_protocol_http_websocket(nc);

// 	printf("Starting HTTP server on port 9000\n");
// 	while (1) {
// 	    mg_mgr_poll(&mgr, 1000);
// 	}

// 	mg_mgr_free(&mgr);
// 	return 0;
// }
