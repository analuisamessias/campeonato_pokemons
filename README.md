# campeonato_pokemons
POKEMON GO!

This document will help u to use the program corrrectly. The comands are:
- 't name':   command to register a coach in the championship.
- 'i idt':   command to print the information of a coach based on the id.
- 'e idt':   name attack_type attack_strength lightning_power': command to add an ElectricPokemon to the specified coach.
- 'q idt':   name attack_type attack_strength jet_liters': command to add an AquaticPokemon to the specified coach.
- 'x idt':   name attack_type attack_strength explosion_jet_temperature': command to add an ExplosivePokemon to the specified coach.
- 'h idt1':   idpk1 idt2 idpk2': command to perform a battle according to the provided ids.

EXAMPLE of Input and Output
- INPUT:
```
t Trainer0
i 0
e 0 Pikachu Lightning 5 2
i 0
t Trainer1
q 1 Squirtle Tsunami 5 3
i 1
h 0 0 1 0
h 1 0 0 0
i 0
i 1
```
- OUTPUT:
```
Name: Trainer0
----------
No Pokemon registered!
----------
Name: Trainer0
----------
Pokemon: Pikachu
Attack type: Lightning
Damage: 10
Energy: 100
----------
Name: Trainer1
----------
Pokemon: Squirtle
Attack type: Tsunami
Damage: 8
Energy: 100
----------
### Battle ###
Trainer0 (Pikachu) vs. Trainer1 (Squirtle)
Pikachu!
Lightning!
Bzzzz!
Damage: 10
Squirtle!
Energy: 90
#########
### Battle ###
Trainer1 (Squirtle) vs. Trainer0 (Pikachu)
Squirtle!
Tsunami!
Splash!
Damage: 8
Pikachu!
Energy: 92
#########
Name: Trainer0
----------
Pokemon: Pikachu
Attack type: Lightning
Damage: 10
Energy: 92
----------
Name: Trainer1
----------
Pokemon: Squirtle
Attack type: Tsunami
Damage: 8
Energy: 90
----------
```
