DECLARE StoreTheCustomerNameAndAddress :ARRAY[1:1000] OF STRING
DECLARE Counter : INTEGER
DECLARE NameAndAddress : STRING
FOR Counter <-1 TO 1000
    INPUT NameAndAddress
    StoreTheCustomerNameAndAddress[Counter]<-NameAndAddress
NEXT


DECLARE service_type:ARRAY[1:7] OF STRING
service_type[1]<-basic_window_clean
service_type[2]<-additional_window_clean
service_type[3]<-two_floors
service_type[4]<-three_floors
service_type[5]<-inside_as_well
service_type[6]<-all_windows_clean
service_type[7]<-special_solar_panel_clean




DECLARE basic_window_clean :ARRAY[1:1000] OF STRING
FOR Counter <-1 TO 1000
    IF choice1 = TRUE
        THEN
            INPUT NameAndAddress
            basic_window_clean[Counter]<-NameAndAddress
    ENDIF
NEXT



DECLARE additional_window_clean :ARRAY[1:1000] OF STRING
FOR Counter <-1 TO 1000
    IF choice2 = TRUE
        THEN
            INPUT NameAndAddress
            additional_window_clean[Counter]<-NameAndAddress
    ENDIF
NEXT


DECLARE two_floors :ARRAY[1:1000] OF STRING
FOR Counter <-1 TO 1000
    IF choice3 = TRUE
        THEN
            INPUT NameAndAddress
            two_floors[Counter]<-NameAndAddress
    ENDIF
NEXT


DECLARE three_floors :ARRAY[1:1000] OF STRING
FOR Counter <-1 TO 1000
    IF  choice4 = TRUE
        THEN
            INPUT NameAndAddress
            three_floors[Counter]<-NameAndAddress
    ENDIF
NEXT


DECLARE inside_as_well :ARRAY[1:1000] OF STRING
FOR Counter <-1 TO 1000
    IF choice5 = TRUE
        THEN
            INPUT NameAndAddress
            inside_as_well[Counter]<-NameAndAddress
    ENDIF
NEXT


DECLARE all_windows_clean :ARRAY[1:1000] OF STRING
FOR Counter <-1 TO 1000
    IF choice6 = TRUE
        THEN
            INPUT NameAndAddress
            all_windows_clean[Counter]<-NameAndAddress
    ENDIF
NEXT


DECLARE special_solar_panel_clean :ARRAY[1:1000] OF STRING
FOR Counter <-1 TO 1000
    IF choice7 = TRUE
        THEN
            INPUT NameAndAddress
            special_solar_panel_clean[Counter]<-NameAndAddress
    ENDIF
NEXT

//TASK2
DECLARE choice1 : Boolean
DECLARE choice2 : Boolean
DECLARE choice3 : Boolean
DECLARE choice4 : Boolean
DECLARE choice5 : Boolean
DECLARE choice6 : Boolean
DECLARE choice7 : Boolean

OUTPUT "basic window clean outside ,only one floor,up to five windows $10.00"
INPUT choice1
OUTPUT "additional_window_clean up to 5 $5.00"
INPUT choice2
OUTPUT "two_floors 10% extra"
INPUT choice3
OUTPUT "three floors 15% extra"
INPUT choice4
OUTPUT "inside as well 25% extra"
INPUT choice5
OUTPUT "polish all windows cleaned 5% extra"
INPUT choice6
OUTPUT "special_solar_panel_clean $20.00"
INPUT choice7


DECLARE service_customer_choosed : ARRAY [1:7] OF STRING
INPUT NameAndAddress 
StoreTheCustomerNameAndAddress[Counter] <- NameAndAddress
FOR n <= 1 TO 7     //store the service_customer_choosed
    INPUT service_type[i]
    service_customer_choosed[n] <- service_type[i] 
    OUTPUT service_customer_choosed[n]
NEXT
    TOTALCOST <=0
    BASICCOST <=0
    EXTRACOST <=0
    SPECIALCOST <=0
FOR n <= 1 TO 7 // calculate the cost consumer choosed
    IF service_customer_choosed[n] = 1
        THEN
            BASICCOST <=BASICCOST + 10
    ENDIF
    IF service_customer_choosed[n] = 2
        THEN
            BASICCOST <=BASICCOST + 5
    ENDIF
    IF service_customer_choosed[n] = 3
        THEN
        EXTRACOST <=EXTRACOST +0.1
    ENDIF
    IF service_customer_choosed[n] = 4
        THEN
            EXTRACOST <=EXTRACOST + 0.15
    ENDIF
    IF service_customer_choosed[n] = 5
        THEN
            EXTRACOST <=EXTRACOST + 0.25
    ENDIF
    IF service_customer_choosed[n] = 6
        THEN
            EXTRACOST <=EXTRACOST + 0.05
    ENDIF
    IF service_customer_choosed[n] = 7
        THEN
            SPECIALCOST <= 20
    ENDIF
NEXT
TOTALCOST <= BASICCOST * (1 + EXTRACOST) + SPECIALCOST    
//use case of!!!!!!!!!!!! 
CASE OF service_customer_choosed[n]
    1 : BASICCOST <=BASICCOST + 10 ; break
    2 : BASICCOST <=BASICCOST +5 ; break
    3 : EXTRACOST <=EXTRACOST + 0.1 ; break
    4 : EXTRACOST <=EXTRACOST + 0.15 ; break
    5 : EXTRACOST <=EXTRACOST + 0.25 ; break
    6 : EXTRACOST <=EXTRACOST + 0.05 ; break
    7 : SPECIALCOST <= 20
    OTHERWISE 
ENDCASE

OUTPUT "YOUR TOTALCOST IS $" + "TOTALCOST"





