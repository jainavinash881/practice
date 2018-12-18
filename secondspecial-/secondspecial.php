<?php
$str="sad@b@a#nzh4asb%sdh+hjg"; #input string
if(isset($str))
{
   
    $res=preg_replace('/([\d\w]*)([^\d\w]{1})([\d\w]*)([^\d\w]{1})([\d\w]*)/', "$1$2$3-$5", $str, 1); #function to replace 2nd special character
    echo $res; #output
}
?>