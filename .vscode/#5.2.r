#5.2
INPUT n 
FOR i<-1 TO n 
    INPUT b
    a[i]<-b
NEXT

index<-1
max<-a[1]
FOR i<-2 TO n 
    IF a[1]>max THEN
        max<-a[1]
        index<-i
    ENDIF
