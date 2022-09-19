//求1-10阶乘
i<--1
s<--1
//2.循环条件
//3.控制变量的修改
FOR i<--1 TO 10
    s=s*i
NEXT

sum<--0
s<--1
FOR i<--1 TO 10
    FOR n<--1 TO 10
        s=s*n
    NEXT
    sum=sum+S
NEXT
