module accept-test
imports lib connect
strategies
  main = id

  bla =
    iowrap(
	  where (<accept>("localhost", 6667, 10) => fd)
(*	; <where(send);send>(fd,<id>)
	; <shutdown>fd
*)
	; repeat (recv; debug(!"recvd: "))
	)
