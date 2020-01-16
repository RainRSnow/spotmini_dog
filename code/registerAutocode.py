file_hadle = open('test.txt','w')
for i in range(0,16):
    file_hadle.writelines('#define  PCA9685_LED%s_ON_L %#xH \n'%(i,i*4+6))
    file_hadle.writelines('#define  PCA9685_LED%s_ON_H %#xH \n'%(i,i*4+7))
    file_hadle.writelines('#define  PCA9685_LED%s_OFF_L %#xH \n'%(i,i*4+8))
    file_hadle.writelines('#define  PCA9685_LED%s_OFF_H %#xH \n'%(i,i*4+9))