# Write your MySQL query statement below
SELECT e1.name 
FROM Employee e1
join Employee e2
    on e1.id = e2.managerID
group by e1.id
    having count(e2.id) >=5;