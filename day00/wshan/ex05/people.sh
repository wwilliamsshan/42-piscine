ldapsearch -LLL "(uid=z*)" -S cn | grep cn | sort -r | cut -c 5-40

