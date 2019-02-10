package test;

import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.core.MediaType;;

@Path("/hello")
public class Hello {

	@GET
	@Produces(MediaType.TEXT_HTML)
	public String sayHelloHTML()
	{
		String resource="<h1> Hi There, THis is Hello from HTML</h1>";
		return resource;
	}
	
	
	
	
}
	
