#!/bin/bash
/usr/bin/find . -type f -printf '%f\n' | git check-ignore --stdin

