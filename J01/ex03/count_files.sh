#!/bin/bash
ls -laR | grep -E "^(d|-|total)" | grep -v "\.$" | wc -l | tr -d " "
