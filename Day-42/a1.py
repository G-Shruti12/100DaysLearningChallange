import mysql.connector
try:
    mydb=mysql.connector.connect
    mydb = mysql.connector.connect(
    host='localhost',
    user='root',
    password='password',
    database='first'
)
    if mydb.is_connected():
        print("connected to my db")
        cursor=mydb.cursor()
        cursor.execute("show databases")
        for x in cursor:
            print(x)
    else:
        print("not connected")
except mysql.connector.Error as e:
    print("error connecting mysqql",e)
finally:
    if mydb.is_connected():
        cursor.close()
   
