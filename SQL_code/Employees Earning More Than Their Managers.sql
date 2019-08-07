# Write your MySQL query statement below
#select name from employee where managerid is not NULL and salary > (select #salary from employee where id in (select id from employee where #managerid is not #null))


select e1.name as Employee from employee e1 join employee m on e1.managerid=m.id and e1.salary>m.salary;
