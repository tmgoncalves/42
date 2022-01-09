#!/bin/bash
ifconfig | grep ether | awk '{print $2"  " $3 " " $4"  " $5}'
