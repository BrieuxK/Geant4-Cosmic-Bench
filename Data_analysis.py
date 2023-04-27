import numpy as np

def analysis(size, hits) :
    bitmap = 0
    chan = [0]*4
    
    
    for i in range(size):
        #print(type(hits[i])) #hits[i] de type int mais devrait être de type "unsigned long long"
        module = (hits[i] >> 51) & 0x3 #!! toujours égal à 0
        #print("module : ", module)
        chan[module] = (hits[i] >> 47) & 0xF
        coarse = (hits[i] >> 23) & 0xFFFFFF
        extra = (hits[i] >> 22) & 0x1
        gain = (hits[i] >> 21) & 0x1
        fine = (hits[i] >> 11) & 0x3FF
        ramp = (hits[i] >> 10) & 0x1
        charge = hits[i] & 0x3FF
        bitmap |= 1 << module #!!bitmap toujours égal à 1 mais devrait être égal à 15 
        #print("bitmap : ",bitmap, "; ité : ", i)
    
    """
    if bitmap != 15 or size != 4 :  #15 en binaire : 1111
        return None
    print(chan[0],chan[1],chan[2],chan[3])
    """

f = open(r"C:\Users\kaczb\Desktop\Exp. methods\run-000052-20230413-122752.dat","rb")

while True:
    size_bytes = f.read(4)
    if not size_bytes:
        break
    size = int.from_bytes(size_bytes, byteorder='little')
    hits = f.read(size * 8)
    print(type(hits))

    if size == 4:
        analysis(size,hits)
        #print("Ui")

    