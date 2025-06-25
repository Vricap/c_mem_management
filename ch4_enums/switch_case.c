#include <stdio.h>

typedef enum {
  HTTP_BAD_REQUEST = 400,
  HTTP_UNAUTHORIZED = 401,
  HTTP_NOT_FOUND = 404,
  HTTP_TEAPOT = 418,
  HTTP_INTERNAL_SERVER_ERROR = 500
} http_error_code_t;

char *http_to_str(http_error_code_t code) {
  char *msg;
  switch(code) {
  	case HTTP_BAD_REQUEST:
  		msg = "400 Bad Request";
  		break;
  	case HTTP_UNAUTHORIZED:
  		msg = "401 Unauthorized";
  		break;
  	case HTTP_NOT_FOUND:
  		msg = "404 Not Found";
  		break;
  	case HTTP_TEAPOT:
  		msg = "418 I AM NOT TEAPOT!";
  		break;
  	case HTTP_INTERNAL_SERVER_ERROR:
  		msg = "500 Internal Server Error";
  		break;
  	default:
  		msg = "Unknown HTTP status code";
  }
  return msg;
}

int main() {
	char *msg = http_to_str(404);
	printf("%s\n", msg);
}
