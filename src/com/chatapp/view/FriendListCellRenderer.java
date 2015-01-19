/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ChatAppha.view;

import java.awt.Component;
import javax.swing.JList;
import javax.swing.ListCellRenderer;

/**
 *
 * @author SAWSAN
 */
public class FriendListCellRenderer implements ListCellRenderer{

    @Override
    public Component getListCellRendererComponent(JList list, Object value, int index, boolean isSelected, boolean cellHasFocus) {
        FriendPanal fp = new FriendPanal();
        return fp;
    }
    
}
