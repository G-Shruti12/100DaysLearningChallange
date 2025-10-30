import xml.etree.ElementTree as Et;
tree=Et.parse("abc.xml")
root=tree.getroot()
for emp in root.findall('Students'):
    name=emp.find('name').text
    age=emp.find('age').text
    classs=emp.find('class').text
    print(name+" " + age +" "+ classs)
new_elt=Et.SubElement(root,"Students")
Et.SubElement(new_elt,"name").text="shruti"
Et.SubElement(new_elt,"age").text="19"
Et.SubElement(new_elt,"class").text="2"
tree.write("abc.xml", encoding="utf-8", xml_declaration=True)
