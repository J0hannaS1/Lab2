#!/bin/bash

# Ask the user for a file name.
read -r -p "Enter a file name: " filename

# Check whether the file exists.
if [[ -f "$filename" ]]; then
    echo "The file '$filename' has been found."
else
    echo "The file '$filename' has not been found."

    # Extra credit: offer to create the missing file.
    read -r -p "Would you like to create this file? (y/n): " answer

    if [[ "$answer" == "y" || "$answer" == "Y" ]]; then
        if touch -- "$filename"; then
            echo "The file '$filename' was created successfully."
        else
            echo "The file '$filename' could not be created."
            exit 1
        fi
    else
        echo "The file was not created."
    fi
fi
