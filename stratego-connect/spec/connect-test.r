module connect-test
imports lib connect
strategies

// heeft een select bij een connect wel zin??
//
// accept 0 -> eindeloos wachten
// accept tijd -> wacht die tijd
// connect 0 -> verwacht meteen een antwoord
// connect tijd -> ??
//
// wait bij beiden -> deadlock tot wait over is
// wait bij connect -> na wait faalt connect
  
  main = id

  bla = iowrap
	( where (<connect>("localhost", 6667, 0) => fd)
	//; repeat(recv; debug(!"recvd: "))
        ; <where(send);send>(fd,<id>)
        ; <shutdown>fd
	)

