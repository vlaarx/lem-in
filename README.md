# lem-in
**Lem-in** is a 21 School team project.
We need to carry some amount of ants from the starting room of the ant farm, which is represented by an undirected graph (nodes are rooms, and edges are links/paths between rooms), to the ending room.
The goal is to make the least amount of steps: at each step any ant can go from it's current room to any linked room. Ants have to avoid traffic jams as well as walking all over another ants, i.e. only one ant can be in the same room (except the starting and the ending rooms) at the same step.

To achieve the best efficiency Bellman-Ford and Suurballe's algorithms were used for finding the shortest disjoint paths in a graph. The graph is represented by an adjacency list in order to get a low time and memory complexity. Number of needed paths depends on the amount of ants.

Lem-in displays all of the steps (ant_name-room_name at each step) needed ants to reach the ending room.

## Usage

Go to the project's directory and run ```make``` to compile the program.

Run the program as showed below:

```./lem-in < farm_template```
