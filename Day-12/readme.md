# Day-12| Documenting what i learned
## topic: css

<img width="324" height="256" alt="image" src="https://github.com/user-attachments/assets/32569f87-d4b6-4759-a403-5645f76cfa84" />

- css refers to cascading style sheet why it is cascading because browser here decide which stylesheet to apply to which tag.
- there is a thing called cascade order according to which it applies css
  1. specificity
  2. order
  3. type of css used
  4. type of selector
  5. !important

 1. specificity: more specific a selector higher the priority than others  
  example
  ```css
  p:first-child:hover{
  }
  p{
  }
  ```
2. order: script is read top to bottom so bottom one declaration can overright top
   example
   ```
   p{
   color:red;
   }
    p{
   color:green;
   }
   p{
   color:blue;
   }
   ```
   3. type of css: inline>internal>external
   4. type of selector: inline>id>class(normal or pseudo)>tag>universal.
   5. !important: to overright things.
      
