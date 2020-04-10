ifconfig -a | grep "eth" | cut -d " " -f2 | sed "s/ether //"
