<div align="center">
  
![image](https://github.com/user-attachments/assets/d6de7959-5f74-43c7-bde1-e8de25f6fbef)

</div>

## Table of Contents

## Introduction

A BRIEF HISTORY
Ray-casting sensation began with the release of a game, Wolfenstein 3D (iD Software). In Wolfenstein 3D, the player is placed on a three dimensional maze-like environment, where he/she must find an exit while battling multiple opponents. Wolfenstein 3D becomes an instant classic for its fast and smooth animation. What enables this kind of animation is an innovative approach to three dimensional rendering known as "ray-casting."

Wolfenstein 3D was developed and created by Id Software. Henceforth, Id's programmer, John Carmack, might well be the person who initiates the ray-casting sensation (Myers 5).A BRIEF HISTORY
Ray-casting sensation began with the release of a game, Wolfenstein 3D (iD Software), in 1992 (see Figure 3 on the next page). In Wolfenstein 3D, the player is placed on a three dimensional maze-like environment, where he/she must find an exit while battling multiple opponents. Wolfenstein 3D becomes an instant classic for its fast and smooth animation. What enables this kind of animation is an innovative approach to three dimensional rendering known as "ray-casting."

Wolfenstein 3D was developed and created by Id Software. Henceforth, Id's programmer, John Carmack, might well be the person who initiates the ray-casting sensation.

## WHAT IS RAY-CASTING?

Ray-casting is a technique that transform a limited form of data (a very simplified map or floor plan) into a 3D projection by tracing rays from the view point into the viewing volume (LaMothe 942).
  
![image](https://github.com/user-attachments/assets/583baac1-c343-472b-8dd3-08b95e8391f6)


## RAY-CASTING AND RAY-TRACING

This distinctions because is made because in general, ray-casting is faster than ray-tracing. This is possible because ray-casting utilizes some geometric constraint to speed up the rendering process. For instance: walls are always perpendicular with floors (you can see this in games such as Doom or Wolfenstein 3D). If it were not for such constraints, ray-casting will not be feasible. We would not want to ray-cast arbitrary splines for instance, because it is difficult to find a geometrical constraints on such shapes.

| Ray-Casting | Ray-Tracing |
|---|---|
|Principle:|rays are cast and traced in groups based on some geometric constraints. For instance: on a 320x200 display resolution, a ray-caster traces only 320 rays (the number 320 comes from the fact that the display has 320 horizontal pixel resolution, hence 320 vertical column). |
|`echo`| Displays a line of text<br>Optional flag `-n`: do not output the trailing newline|
|`env` | Displays the environment variables|
|`exit`| exits the shell with the status in the argument or the current status if none is specified .<br>also needs a numeric argument for the status otherwise it will error |
|`export`|  with an argument it needs a valid identifier followed by an optional = and value. <br> creates or changes the value of an existing environment variable. <br> if no argument is provided it will print the environment variables in a weird format.|
|`pwd`| Shows the current directory as an absolute path.|
|`unset`|with a valid identifier as argument it unsets/deletes the environment variable. <br>otherwise it shows an error.|
