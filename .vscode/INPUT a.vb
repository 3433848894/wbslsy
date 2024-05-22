INPUT a
IF MOD(a,2)=0
    THEN 
    OUTPUT NO
    ELSE
    OUTPUT YES
ENDIF



DECLARE a:INTEGER
INPUT a
IF (a-10)>=0 AND (a-99)<=0
    THEN 
    OUTPUT 1
    ELSE
    OUTPUT 0
ENDIF

DECLARE a:INTEGER
INPUT a 
CASE OF a 
    1:OUTPUT MON
    2:OUTPUT TUES
    3:OUTPUT WED
    4:OUTPUT THUR
    5:OUTPUT FRI
    6:OUTPUT SAT
    7:OUTPUT SUN
ENDCASE


  
DECLARE weight:INTEGER
DECLARE cost:INTEGER
DECLARE hurry:BOOLEAN
INPUT weight,hurry
PRINT "重量 是否需要加急TRUE OR FALSE"
IF weight<=1000
    THEN
        cost<-8
    ELSE
        IF MOD(weight-1000,500)<>0
            THEN
                cost<-8+((weight-1000)/500+1)*4
            ELSE
                cost<-8+((weight-1000)/500)*4
        ENDIF
ENDIF
IF hurry =TRUE
    THEN
        cost<-cost+5
ENDIF
OUTPUT cost



DECLARE a:INTEGER
DECLARE b:INTEGER
DECLARE c:INTEGER
INPUT a" ",b" ",c" "
IF a>b
    THEN
        IF a>c
            THEN
                OUTPUT a 
            ELSE
                OUTPUT c
        ENDIF 
    ELSE
        IF b>c
            THEN
                OUTPUT b 
            ELSE
                OUTPUT c
        ENDIF
ENDIF


DECLARE a:INTEGER

INPUT a 
IF DIV(a,3) =0 AND DIV(a,5)=0
    THEN
        OUTPUT "YES"
    ELSE
        OUTPUT "NO"
ENDIF


DECLARE TOTAL:INTEGER
DECLARE NUMBER:INTEGER
DECLARE COUNTER:INTEGER
TOTAL<-0
NUMBER<-1
FOR COUNTER 1 TO 99
    NUMBER<-NUMBER+2
    TOTAL<-TOTAL+NUMBER
NEXT
OUTPUT TOtAL

DECLARE a:INTEGER
DECLARE n:INTEGER
DECLARE c:CHAR 
INPUT n  
CONSTANT c<- *
FOR a 1 TO n 
    PRINT c
    IF a<n 
        THEN
            OUTPUT c
        ELSE 
            a<a+1
    ENDIF
NEXT

