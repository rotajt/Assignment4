# Assignment4

1. Print both hash functions and provide screenshots in the report.


       The functions suppose to be running as expected but it gives “Segmentation fault (core dumped)”, where it doesn’t show where is exactly the error.
2. Print both collision rates.


       There are two static member to calculate the rate of creation of the objects in the two classes and also function rate where it recieves two arguments the first the total obj created and the second is the number of collision occurred and then output the result on the screen.
3. Write which one do you think is better?


       The linked list hash-table is better in handling the propping and it’s also easier when it comes to add and remove the elements inserted.
4. Explain the hash function you chose and why you chose it.


       I choose to use the Division method (Cormen) (ex: el % SIZE) to perform the hashing since it’s simple and somehow still efficient because the number of elements we have is not that big so I believe it will fulfil the needed requirements, there is also another way commented which is Knuth Variant on Division which is similar to the previous one bas it operations somehow differently by adding an addition and multiplication before performing the mod operation (ex:el(el+3)% SIZE).
