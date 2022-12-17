# Write your MySQL query statement below
# select name as Customers from Customers where id not in (select customerId from orders);
SELECT Customers.name AS Customers
FROM Customers
LEFT JOIN Orders
ON Customers.id = Orders.customerId
WHERE Orders.customerId is null;