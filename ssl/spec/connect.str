module connect
strategies
  connect = ?(h,p,w); prim("SSL_connect", h, p, w)
  connect = ?(h,p); !0 => w; prim("SSL_connect", h, p, w)
  accept = ?(h,p,w); prim("SSL_accept", h, p, w)
  accept = ?(h,p); !0 => w; prim("SSL_accept", h, p, w)
  send  = ?(fd,msg); prim("SSL_send", fd, msg)
  recv  = ?fd; prim("SSL_recv", fd)
  shutdown  = ?fd; prim("SSL_shutdown", fd)

  sendrecv(sfd) = 
debug(!"sbla-1: ");
	  where(sfd => fd)
	; <
debug(!"sbla0: ");
send>(fd,<id>)
;debug(!"sbla1: ")
	; <recv>fd
;debug(!"sbla2: ")

