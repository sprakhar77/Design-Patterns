## Design Patterns C++

Software design patterns are a set of templates that are commanly seen in most of Object oriented projects.
They are not complete solutions but are methods that can be applied to such problems which are common.

### Creational
1. <b>Factory</b> - Hides the creation of objects following a common interface.
2. <b>Abstract Factory</b> - Add another layer of abstraction to Factory so that the factory can be subclassed.
3. <b>Builder</b> - Hide the creation of complex objects which may involve a lot of steps for creation.
4. <b>Prototype</b> - Create a clone of itself without explicitly knowing the class of the object.
5. <b>Singleton</b> - Have single instance of a class in the entire application.

### Structural
6. <b>Adapter</b> - Make incompatible interfaces work together.
7. <b>Bridge</b> - Provide two way abstraction for implementation of a stratergy and the class which uses such a stratergy. 
8. <b>Composite</b> - Provide a tree like structre for objects that follow a common interface.
9. <b>Decorator</b> - Add new responsibilites to objects without subclassing.
10. <b>Facade</b> - Encapsulate a group of interfaces in one to provide one call access to all of them.
11. <b>Flyweight</b> - Store and reuse shared objects rather them creating them again and again.
12. <b>Proxy</b> - Wrapp the real class around a proxy class to provide conditional ccess to the real object.

### Behavioral
13. <b>Chain Of Responsibility</b> - A chain of operations that is performed step by step if the pervious
one cannot handle it.
14. <b>Command</b> - Encapsulate a request so that it can be handled by diffrent classes that 
follow a common interface.
15. <b>Iterator</b> - Provide a interface to access an aggregate class.
16. <b>Mediator</b> - Provide a common point through all objects interact with each other.
17. <b>Memento</b> - Store the previous states of the object and undo them when needed.
18. <b>Observer</b> - Provide a one to many mode of communication between a subject and all its observers.
19. <b>Stratergy</b> - Provide abstraction to variuous implementations of a particular stratergy.
20. <b>State</b> - Provide a way to represent FSM.
21. <b>Template Method</b> - Provide abstraction to the steps of an algorithm.
22. <b>Visitor</b> - Allows operation to be performed on elemets of an object without changing those classes.

