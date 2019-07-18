//void sort_quick(int mode, struct D_NODE *Left, struct D_NODE *Right )
//{
//    // key_node : pivot를 나타냄, Right값을 가짐.
//    // 링크드리스트이기때문에 배열과 같이 index를 나타내는 부분이 없음.
//    // -> 그래서 nLeft, nRight, nTotal 값으로 index를 check.
//    // 해당 index는 list_count() 함수로 구함.
//
//    struct D_NODE *Key_node, *left_node, *right_node;
//    int nLeft=1,nRight, nTotal;
//
//    nTotal = list_count(Right,Left,Right);
//    nRight = nTotal-1;
//
//    // 정렬 해야되는 노드 수가 1개일경우 재귀함수 종료
//    if(nRight <= 0)	return;
//
//    Key_node =  Right;
//    left_node = Left;
//    right_node = Right->list.pre_node;
//
//    while(1)
//    {
//        //mode 1 : 오름차순 정렬
//        //mode 2 : 내림차순 정렬
//        if(mode ==1)
//        {
//            // key값을 기준으로 left 값과 right값 비교하면서 이동
//            while( left_node->number < Key_node->number)
//            {
//                left_node = left_node->list.next_node;
//                nLeft++;
//            }
//            while( right_node->number > Key_node->number)
//            {
//                if(nRight <=1 || right_node->list.pre_node ==NULL )
//                    break;
//                right_node = right_node->list.pre_node;
//                nRight--;
//            }
//        }else if(mode== 2)
//        {
//            while( left_node->number > Key_node->number)
//            {
//                left_node = left_node->list.next_node;
//                nLeft++;
//            }
//            while( right_node->number < Key_node->number)
//            {
//                if(nRight <=1 || right_node->list.pre_node ==NULL )
//                    break;
//                right_node = right_node->list.pre_node;
//                nRight--;
//            }
//        }
//
//        // while 종료 조건
//        if(nLeft >= nRight)
//            break;
//        // 정렬
//        swap_node(left_node, right_node);
//
//        left_node = left_node->list.next_node;
//        nLeft++;
//        right_node = right_node->list.pre_node;
//        nRight--;
//    }
//
//    // 기준이 되는 key을 변경
//    swap_node(Key_node, left_node);
//
//    // key(pivot) 값을 기준으로 왼쪽 리스트 정렬시 재귀
//    if(left_node->list.pre_node != NULL && nLeft-1 > 0)
//        if(left_node->list.next_node != Left && Left->list.pre_node !=left_node)
//            sort_quick(mode, Left, left_node->list.pre_node);
//
//    // key(pivot) 값을 기준으로 오른쪽 리스트 정렬시 재귀
//    if(left_node->list.next_node != NULL && nLeft < nTotal )
//        if((left_node->list.pre_node != Right) &&  (Right->list.next_node != left_node))
//            sort_quick(mode, left_node->list.next_node, Right);
//
//}