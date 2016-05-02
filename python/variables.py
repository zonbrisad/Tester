#!/usr/bin/python



import string


a = 10
print ('a = ',  a)


print ('\nList tests\n')
b = [12, 44]
print ('b = ', b)
b.append(33)
b.append(21)
print ('b = ', b)
print ('b contains ', len(b), ' elements')

print ('\nAssociated array tests\n')
c = {'a':1,'b':3}
print (c)
print (c['b'])


#
# Strings
s  = "aa bb cc dd"
sl = s.split()
print(sl)


#
# input
#
aa = input('Enter something')
print(aa)