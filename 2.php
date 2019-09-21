<?php

// Memasukkan dan memvalidasi User Name
$UserName='firadeakr';
if(preg_match("/^[a-z0-9]{5,9}$/",$UserName)){
   echo "User Name Berhasil";
   
}
   else{
   echo "User Name harus berupa karakter kecil minimal 5 huruf dan maksimal 9 huruf";
   
   }

echo nl2br ("\n\n");


// Memasukkan dan memvalidasi Password
$password='dAsadeDd3@';
$Upper = preg_match('@[A-Z]@', $password);
$Lower = preg_match('@[a-z]@', $password);
$Number= preg_match('@[0-9]@', $password);
$Char  = preg_match('@[^\w]@', $password);

if(!$Upper || !$Lower || !$Number || !$Char || strlen($password) < 10 && strlen($password) > 10) {
    echo " Password harus 8 karakter dengan kombinasi huruf kecil, kapital, angka, karakter khusus, masing masing minimal 1 karakter";
}else{
    echo "Password Berhasil";
}