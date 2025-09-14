package l4

type emailStatus int 

const ( 
	emailBounced emailStatus = iota
	emailInvalid
	emailDelivered
	emailOpened
)