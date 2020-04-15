#!/bin/sh
VAR=$(git rev-parse --show-toplevel) 
find $VAR -type f | git check-ignore --stdin | rev | cut -d'/' -f 1 | rev