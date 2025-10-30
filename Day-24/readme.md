# Day-24|Documenting what i learnt
# topic: reading and writting data in xml through python.
- we can read data from a xml file through either filehandling but there is better way to do this using inbuilt library.
- in python it is **import xml.etree.ElementTree** which represents elements in it in a tree like stucture.
- 
```
import xml.etree.ElementTree as Et
tree = Et.parse("abc.xml")     # load XML file
root = tree.getroot()          # get root element
```
you can also write in it using 
```
library = Et.Element("library")
student = Et.SubElement(library, "Students")
Et.SubElement(student, "name").text = "Rohan"
Et.SubElement(student, "age").text = "23"
Et.SubElement(student, "class").text = "8"
tree = Et.ElementTree(library)
tree.write("abc.xml", encoding="utf-8", xml_declaration=True)
```
