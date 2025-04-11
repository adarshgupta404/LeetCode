# Write your MySQL query statement below
SELECT C.name Customers FROM Customers C 
LEFT OUTER JOIN Orders O ON C.id = O.customerId WHERE O.customerId IS NULL;