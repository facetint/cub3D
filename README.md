<div align="center">
  
![image](https://github.com/user-attachments/assets/d6de7959-5f74-43c7-bde1-e8de25f6fbef)

</div>

## Table of Contents
- [Introduction](#introduction)
  - [A BRIEF HISTORY](#a-brief-history)
  - [WHAT IS RAY-CASTING?](#what-is-ray-casting?)
    - [Ray-Casting Ray-Tracing](#Ray-Casting-Ray-Tracing)

## Introduction

## A BRIEF HISTORY
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
|Principle: rays are cast and traced in groups based on some geometric constraints. For instance: on a 320x200 display resolution, a ray-caster traces only 320 rays (the number 320 comes from the fact that the display has 320 horizontal pixel resolution, hence 320 vertical column).|Principle: each ray is traced separately, so that every point (usually a pixel) on the display is traced by one ray. For instance: on a 320x200 display resolution, a ray-tracer needs to trace 320x200 (64,000) rays. (That is roughly 200 times slower than ray-casting.) |
|Formula: in most cases, inexact.| 	Formula: in most cases, exact.|
|Speed: very fast compared to ray-tracing; suitable for real time process. | Speed: slow; unsuitable for real time process (at least not until we got a 500Ghz machine).|
|Quality: resulting image is not very realistic. Often, they are blocky| Quality: resulting image is very realistic - sometimes too realistic |
|World: limited by one or more geometric constraints (simple geometric shapes).|  World: almost any shape can be rendered.|
|Storage: small. Rendered images are not stored on disk. Normally, only the map is stored, and corresponding images are generated "on the fly.| Storage: Rendered images are stored on disk and loaded when needed. Presently, no hardware is fast enough for "on the fly" rendering.|
|Examples: Wolfenstein 3D (iD Software), Shadow Caster (Raven), Arena (Bethesda), Doom (iD Software), Dark Forces (LucasArts).|Examples: Examples: 7th Guest (Trilobyte), Critical Path (Mechadeus), 11th Hour (Trilobyte), Myst (Cyan), Cyberia (Xatrix).|
