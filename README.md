# README - Software Design Projects

## Course: Software Analysis and Design - I

### Description
This repository contains the projects developed for the **Software Analysis and Design - I** course, focusing on **requirements gathering** and **system design** using a small business (sole proprietorship) as a case study. The course also covers an understanding of the Canadian business environment and the application of **object-oriented design (OO)** techniques to create suitable business solutions.

The goal is to explore whether it is more advantageous to **buy or build software** and to document the necessary design models to meet the demands of a small business.

### Learning Outcomes
Upon completing the projects in this repository, the following learning outcomes were achieved:

1. **Business Analysis**: Description of the activities a small business performs to ensure profitability.
2. **Development Methodologies**: Identification of differences between development methodologies and adaptation of the most appropriate methodology to solve business problems.
3. **Research and Requirements Gathering**: Conducting research and gathering the necessary information to determine what the proposed system needs to accomplish.
4. **System Design**: Developing and delivering a system design model suitable for the business context.
5. **Team Collaboration**: Collaborating in a team to select the most appropriate solution for the case study.

---

This README provides an overview of the course and the software design projects contained in this repository.

```sequenceDiagram
    participant Owner
    participant UIController
    participant DomainController
    participant obj1 as collections obj1
    participant EntityManager
    
    Owner ->> UIController: Request()
    activate UIController
    UIController ->> DomainController: Request()
    deactivate UIController
    activate DomainController
    DomainController ->> EntityManager: Request()
    activate EntityManager
    EntityManager ->> obj1: Request()
    deactivate EntityManager
    DomainController ->> obj1: Request()
    DomainController ->> UIController: Response()
    deactivate DomainController
    activate UIController
    UIController ->> Owner: Response()
    deactivate UIController
```
![Diagrama do Kroki](https://kroki.io/plantuml/svg/eNp9UrsOwjAM3PMVHgGpAytDVQQMDAgJiQ9IWwNFJYbU5fH3JLwatxVLHrbvzuckqVhbrk-l0hmThfXNoFUZGbZUwnY5e5_KIDinky6MSLgt44JMBZQex7_KheGCHytt9N6VHYocYUfEKd2VmjrAVTN-FF8rRLGQnMAGLzVWPBgCgO_wDQlrfELcHUe7w5BH5djL07B3_Vn08a7Nb7zPbZslikU-aKlRlgziBpHz5VVHoxAamPkvDx94CO7W9My_Oju_KKU6E-qfqHwWx_16ZEGaoMn953sCBcToBw==)
