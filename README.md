# room-rental-system-Cpp
A simple student room rental system / OOP with C++



## assignment description

> Students often look for a place to live during their studies. We want to create a system to store these properties. 

There are only two types of properties for this system: An apartment or studenthouse. All properties in the system have an address (which can be stored in just one string) and a unique number, starting with 1 and automatically incrementing when a property is added.
For studenthouses a list of student rooms will be kept. Every student room has a number, a name of the student who lives in it and a rental price for the room. The number will not be autogenerated, but needs to be given when you add a room to the system. The rooms will normally be added by reading a JSON file. Two JSON files are supplied.
The last thing you should add is a feature to get the studenthouse with the largest revenue. The revenue is the sum of all room rental prices.

> Please note: You don’t have to make a menu or other user interfaces for the system.


## Example outout

Output of the system looks like this:
```text
Overview of all properties
1) One Infinite Loop with surface area 95
2) 1600 Amphitheatre Parkway with surface area 65
3) One Microsoft Way with surface area 45
4) 500 Oracle Parkway with name Java Programmer House and total revenue 2500:
Room 1 rented to James Gosling with price 500
Room 2 rented to Bill Gates with price 900
Room 3 rented to Edsger Dijkstra with price 300
Room 4 rented to Steve Jobs with price 800
5) One New Orchard Road with name IBM fans and total revenue 1500:
Room 1 rented to Donald Knuth with price 700
Room 2 rented to Andrew Tanenbaum with price 600
Room 3 rented to Grace Hopper with price 200

The student house with the largest revenue is: 
4) 500 Oracle Parkway with name Java Programmer House and total revenue 2500:
Room 1 rented to James Gosling with price 500
Room 2 rented to Bill Gates with price 900
Room 3 rented to Edsger Dijkstra with price 300
Room 4 rented to Steve Jobs with price 800

```
---

## Contributor
Jihee Hong, <jihee102@gmail.com>

---
## License & copyright
© Jihee Hong
