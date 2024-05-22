INPUT t
IF t >=25 AND <=30
    THEN
    OUTPUT OK
    ELSE
    OUTPUT ERROR
ENDIF


sumo <-0
sumj <-0
for i 1 TO 100
    IF MOD (i,2) =0
    sumo<- i + sumo
    ELSE 
    sumj<-i + sumj
NEXT
OUTPUT sumo
OUTPUT sumj