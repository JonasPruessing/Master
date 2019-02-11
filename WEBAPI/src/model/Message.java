package model;

import java.util.Date;

import javax.xml.bind.annotation.XmlRootElement;

@XmlRootElement
public class Message {

	private long id;
    private String message;
    private String objects;
    private String room;
    private String author;
	private Date created;
    
    public Message() {
    	
    }
    
    public Message(long id, String message,String room,String objects, String author) {
    	this.id = id;
    	this.message = message;
    	this.room = room;
    	this.objects = objects;
    	this.author = author;
    	this.created = new Date();
    }
    
	public long getId() {
		return id;
	}
	public void setId(long id) {
		this.id = id;
	}
	public String getMessage() {
		return message;
	}
	public void setMessage(String message) {
		this.message = message;
	}
	
	public String getRoom() {
		return room;
	}
	public void setRoom(String room) {
		this.room = room;
	}
	
	public String getObjects() {
		return objects;
	}
	public void setObjects(String objects) {
		this.objects = objects;
	}
	
	public Date getCreated() {
		return created;
	}
	public void setCreated(Date created) {
		this.created = created;
	}
	public String getAuthor() {
		return author;
	}
	public void setAuthor(String author) {
		this.author = author;
	}
	
}
