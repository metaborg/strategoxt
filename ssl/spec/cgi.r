// This module provides support for CGI programming in Stratego. The implementation is
// based on the CGI tutorial at http://hoohoo.ncsa.uiuc.edu/cgi/ .

module cgi
imports lib
strategies

// STANDARD ENVIRONMENT VARIABLES

// The following environment variables are not request-specific and are set for all requests:

  server-software =
    <getenv> "SERVER_SOFTWARE"

    // The name and version of the information server software answering
    // the request (and running the gateway). Format: name/version

  server-name =
    <getenv> "SERVER_NAME"

    // The server's hostname, DNS alias, or IP address as it would
    // appear in self-referencing URLs.

  gateway-interface =
    <getenv> "GATEWAY_INTERFACE"

    // The revision of the CGI specification to which this server
    // complies. Format: CGI/revision

// The following environment variables are specific to the request being fulfilled by the gateway program:

  server-protocol =
    <getenv> "SERVER_PROTOCOL"

    // The name and revision of the information protcol this request
    // came in with. Format: protocol/revision

  server-port =
    <getenv> "SERVER_PORT"

    // The port number to which the request was sent.

  request-method =
    <getenv> "REQUEST_METHOD"

    // The method with which the request was made. For HTTP, this is
    // "GET", "HEAD", "POST", etc.

  path-info =
    <getenv> "PATH_INFO"

    // The extra path information, as given by the client. In other
    // words, scripts can be accessed by their virtual pathname, followed
    // by extra information at the end of this path. The extra
    // information is sent as PATH_INFO. This information should be
    // decoded by the server if it comes from a URL before it is passed
    // to the CGI script.

  path-translated =
    <getenv> "PATH_TRANSLATED"

    // The server provides a translated version of PATH_INFO, which
    // takes the path and does any virtual-to-physical mapping to it.

  script-name =
    <getenv> "SCRIPT_NAME"

    // A virtual path to the script being executed, used for
    // self-referencing URLs.

  query-string =
    <getenv> "QUERY_STRING"

    // The information which follows the ? in the URL which referenced
    // this script. This is the query information. It should not be
    // decoded in any fashion. This variable should always be set when
    // there is query information, regardless of command line decoding.

  remote-host =
    <getenv> "REMOTE_HOST"

    // The hostname making the request. If the server does not have
    // this information, it should set REMOTE_ADDR and leave this unset.

  remote-addr =
    <getenv> "REMOTE_ADDR"

    // The IP address of the remote host making the request.

  auth-type =
    <getenv> "AUTH_TYPE"

    // If the server supports user authentication, and the script is
    // protects, this is the protocol-specific authentication method used
    // to validate the user.
 
  remote-user =
    <getenv> "REMOTE_USER"

    // If the server supports user authentication, and the script is
    // protected, this is the username they have authenticated as.

  remote-ident =
    <getenv> "REMOTE_IDENT"

    // If the HTTP server supports RFC 931 identification, then this
    // variable will be set to the remote user name retrieved from the
    // server. Usage of this variable should be limited to logging only.

  content-type =
    <getenv> "CONTENT_TYPE"

    // For queries which have attached information, such as HTTP POST
    // and PUT, this is the content type of the data.  

  content-length =
    <getenv> "CONTENT_LENGTH"

    // The length of the said content as given by the client.

// In addition to these, the header lines received from the client, if
// any, are placed into the environment with the prefix HTTP_ followed by
// the header name. Any - characters in the header name are changed to _
// characters. The server may exclude any headers which it has already
// processed, such as Authorization, Content-type, and Content-length. If
// necessary, the server may choose to exclude any or all of these
// headers if including them would exceed any system environment limits.

// An example of this is the HTTP_ACCEPT variable which was defined in
// CGI/1.0. Another example is the header User-Agent.

  http-accept =
    <getenv> "HTTP_ACCEPT"

    // The MIME types which the client will accept, as given by HTTP
    // headers. Other protocols may need to get this information from
    // elsewhere. Each item in this list should be separated by commas as
    // per the HTTP spec.

    // Format: type/subtype, type/subtype

  http-user-agent =
    <getenv> "HTTP_USER_AGENT"

    // The browser the client is using to send the request. General
    // format: software/version library/version.

strategies

// UTILITIES

  decode-query-string =
    prim("SSL_get_cgi_query")
