<?php
    $id = "1asfaesf1212";  #input string
    if (preg_match('/^[0-9]*$/', $id)) { #validate input string from start to end
	echo "valid input digit string";
    } else {
        echo "invalid input string ";
    }
?>