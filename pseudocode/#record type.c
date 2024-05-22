#record type
TYPE details_of_book
    DECLARE title : string
    DECLARE year_of_publication : INTEGER
    DECLARE price : REAL
    DECLARE ISBN : string
ENDTYPE 

DECLARE book : details_of_book
book.title <- "Computer Science"
book.year_of_publication <- 2015
book.price <- 15.99
book. ISBN <- "9781107546738"


TYPE job_vacancies 
    DECLARE job_title : string
    DECLARE company : string
    DECLARE hour_rate_of_pay : INTEGER
    DECLARE hours : INTEGER
ENDTYPE




