module communication
imports lib connect
strategies

  client(end, actions, host, port) =
	  where (<connect>(<host>,<port>,0) => fd)  
;debug(!"cbla0: ")
	; rec r ({data:
	  sendrecv(!fd) => data
;debug(!"cbla1: ")
	; (end; !data <+ actions; r)
;debug(!"cbla2: ")
	})
;debug(!"cbla4: ")
	; where (<shutdown>fd)
;debug(!"cbla5: ")

  server(actions, host, port, wait) =
debug(!"sbla-1: ");
	  <accept>(<host>,<port>,<wait>) => fd
;debug(!"sbla0: ")
	; repeat 
	(
debug(!"sbla: ");
<recv>fd; 
debug(!"sbla1: ");
actions; 
debug(!"sbla2: ");
<send>(fd,<id>)
	)

