switch (choice)
{
case 1:
    insert();
    menu();
    break;

    case 2:
    search();
    menu();
    break;

    case 3:
    update();
    menu();
    break;

    case 4:
    del();
    menu();
    break;

    case 5:
    sort();
    show();
    menu();
    break;
    case 6:
    exit(0);
    default:
      cout<<"invalid";
}

}
void Hotel::insert()
{
 cout<<"\n\t_____Hotel Management system______";
 Node  *new_Node = new Node;
 cout<<"\nEnter Room Id "<<endl;
 cin>>new_node->id;
  cout<<"\nEnter Customer Name "<<endl;
 cin>>new_node->name;
  cout<<"\nEnter Allocated Date "<<endl;
 cin>>new_node->date;
  cout<<"\nEnter Room Type(singel/ double/twin) "<<endl;
 cin>>new_node->roomtype;
 if(head==Null)
 {
    head =new_node;
 }
 else
 {
    Node* ptr = head;
    while(ptr->next !=Null)
    {
        ptr= ptr->next;
    }
    ptr->next =new_node;
 }
 cout<<"\n\n\t\t New Room Inserted";
}